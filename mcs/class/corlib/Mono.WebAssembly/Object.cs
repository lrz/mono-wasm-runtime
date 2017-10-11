using System;
using System.Collections.Generic;

namespace Mono.WebAssembly
{
    public abstract class Object
    {
        private int InternalReference;

        public Object(string expr)
        {
            InternalReference = Int32.Parse(
                    Runtime.JavaScriptEval("mono_wasm_wrap_obj(" + expr
                        + ")"));
        }

        public Object(int reference)
        {
            InternalReference = reference;
        }

        protected string InvokeExpr(string expr)
        {
            return "mono_wasm_unwrap_obj(" + InternalReference + ")." + expr;
        }

        protected string Invoke(string expr)
        {
            return Runtime.JavaScriptEval(InvokeExpr(expr));
        }

        protected string[] InvokeArray(string expr, bool wrap_objects)
        {
            string invoke_expr = wrap_objects
                ? ("Array.from(" + InvokeExpr(expr)
                        + ").map(mono_wasm_wrap_obj)")
                : InvokeExpr(expr); 

            var res = Runtime.JavaScriptEval(invoke_expr);

            return res.Length > 0 ? res.Split(',') : new string[0];
        }
    }
}
