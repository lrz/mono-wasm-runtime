#ifndef USED_CROSS_COMPILER_OFFSETS
#  ifdef COMPILE_WASM32
#    ifdef COMPILE_WASM32
#      ifndef HAVE_BOEHM_GC
#        define HAS_CROSS_COMPILER_OFFSETS
#        if defined (USE_CROSS_COMPILE_OFFSETS) || defined (MONO_CROSS_COMPILE)
#          if !defined (DISABLE_METADATA_OFFSETS)
#            define USED_CROSS_COMPILER_OFFSETS
             DECL_ALIGN2(gint8,1)
             DECL_ALIGN2(gint16,2)
             DECL_ALIGN2(gint32,4)
             DECL_ALIGN2(gint64,8)
             DECL_ALIGN2(float,4)
             DECL_ALIGN2(double,8)
             DECL_ALIGN2(gpointer,4)
             DECL_SIZE2(gint8,1)
             DECL_SIZE2(gint16,2)
             DECL_SIZE2(gint32,4)
             DECL_SIZE2(gint64,8)
             DECL_SIZE2(float,4)
             DECL_SIZE2(double,8)
             DECL_SIZE2(gpointer,4)
             DECL_OFFSET2(MonoObject,vtable,0)
             DECL_OFFSET2(MonoObject,synchronisation,4)
             DECL_OFFSET2(MonoObjectHandlePayload,__raw,0)
             DECL_OFFSET2(MonoClass,interface_bitmap,80)
             DECL_OFFSET2(MonoClass,byval_arg,108)
             DECL_OFFSET2(MonoClass,cast_class,4)
             DECL_OFFSET2(MonoClass,element_class,0)
             DECL_OFFSET2(MonoClass,idepth,12)
             DECL_OFFSET2(MonoClass,instance_size,16)
             DECL_OFFSET2(MonoClass,interface_id,60)
             DECL_OFFSET2(MonoClass,max_interface_id,64)
             DECL_OFFSET2(MonoClass,parent,28)
             DECL_OFFSET2(MonoClass,rank,14)
             DECL_OFFSET2(MonoClass,sizes,88)
             DECL_OFFSET2(MonoClass,supertypes,8)
             DECL_OFFSET2(MonoVTable,klass,0)
             DECL_OFFSET2(MonoVTable,max_interface_id,20)
             DECL_OFFSET2(MonoVTable,interface_bitmap,16)
             DECL_OFFSET2(MonoVTable,vtable,36)
             DECL_OFFSET2(MonoVTable,rank,24)
             DECL_OFFSET2(MonoVTable,initialized,25)
             DECL_OFFSET2(MonoVTable,type,12)
             DECL_OFFSET2(MonoVTable,runtime_generic_context,32)
             DECL_OFFSET2(MonoDomain,stack_overflow_ex,52)
             DECL_OFFSET2(MonoDelegate,target,16)
             DECL_OFFSET2(MonoDelegate,method_ptr,8)
             DECL_OFFSET2(MonoDelegate,invoke_impl,12)
             DECL_OFFSET2(MonoDelegate,method,20)
             DECL_OFFSET2(MonoDelegate,method_code,32)
             DECL_OFFSET2(MonoDelegate,method_is_virtual,48)
             DECL_OFFSET2(MonoDelegate,extra_arg,28)
             DECL_OFFSET2(MonoInternalThread,tid,48)
             DECL_OFFSET2(MonoInternalThread,small_id,116)
             DECL_OFFSET2(MonoInternalThread,static_data,60)
             DECL_OFFSET2(MonoInternalThread,last,164)
             DECL_OFFSET2(MonoMulticastDelegate,delegates,52)
             DECL_OFFSET2(MonoTransparentProxy,rp,8)
             DECL_OFFSET2(MonoTransparentProxy,remote_class,12)
             DECL_OFFSET2(MonoTransparentProxy,custom_type_info,16)
             DECL_OFFSET2(MonoRealProxy,target_domain_id,20)
             DECL_OFFSET2(MonoRealProxy,context,12)
             DECL_OFFSET2(MonoRealProxy,unwrapped_server,16)
             DECL_OFFSET2(MonoRemoteClass,proxy_class,8)
             DECL_OFFSET2(MonoArray,vector,16)
             DECL_OFFSET2(MonoArray,max_length,12)
             DECL_OFFSET2(MonoArray,bounds,8)
             DECL_OFFSET2(MonoArrayBounds,lower_bound,4)
             DECL_OFFSET2(MonoArrayBounds,length,0)
             DECL_OFFSET2(MonoSafeHandle,handle,8)
             DECL_OFFSET2(MonoHandleRef,handle,4)
             DECL_OFFSET2(MonoComInteropProxy,com_object,40)
             DECL_OFFSET2(MonoString,length,8)
             DECL_OFFSET2(MonoString,chars,12)
             DECL_OFFSET2(MonoException,message,12)
             DECL_OFFSET2(MonoTypedRef,type,0)
             DECL_OFFSET2(MonoTypedRef,klass,8)
             DECL_OFFSET2(MonoTypedRef,value,4)
             DECL_OFFSET2(MonoThreadsSync,status,0)
             DECL_OFFSET2(MonoThreadsSync,nest,4)
             DECL_OFFSET2(SgenClientThreadInfo,in_critical_region,232)
             DECL_OFFSET2(SgenThreadInfo,tlab_next,272)
             DECL_OFFSET2(SgenThreadInfo,tlab_temp_end,276)
#          endif //disable metadata check
#          ifndef DISABLE_JIT_OFFSETS
#            define USED_CROSS_COMPILER_OFFSETS
             DECL_OFFSET2(MonoLMF,previous_lmf,0)
             DECL_OFFSET2(MonoMethodRuntimeGenericContext,class_vtable,0)
             DECL_OFFSET2(MonoJitTlsData,lmf,8)
             DECL_OFFSET2(MonoJitTlsData,class_cast_from,48)
             DECL_OFFSET2(MonoJitTlsData,class_cast_to,52)
             DECL_OFFSET2(MonoJitTlsData,handler_block_return_address,92)
             DECL_OFFSET2(MonoJitTlsData,restore_stack_prot,16)
             DECL_OFFSET2(MonoGSharedVtMethodRuntimeInfo,locals_size,0)
             DECL_OFFSET2(MonoGSharedVtMethodRuntimeInfo,entries,4)
             DECL_OFFSET2(MonoContinuation,stack_used_size,28)
             DECL_OFFSET2(MonoContinuation,saved_stack,32)
             DECL_OFFSET2(MonoContinuation,return_sp,20)
             DECL_OFFSET2(MonoContinuation,lmf,0)
             DECL_OFFSET2(MonoContinuation,return_ip,16)
             DECL_OFFSET2(MonoDelegateTrampInfo,invoke_impl,20)
             DECL_OFFSET2(MonoDelegateTrampInfo,method_ptr,16)
#          endif //disable jit check
#        endif //cross compiler checks
#      endif //gc check
#    endif //os check
#  endif //arch check
#endif //USED_CROSS_COMPILER_OFFSETS check
