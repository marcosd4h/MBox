#pragma once


namespace MBox
{
    namespace KBasic
    {
        namespace Object
        {
            NTSTATUS QueryObjectName(
                void * aObject,
                POBJECT_NAME_INFORMATION aObjectName,
                ktl::u32 aInputBytes,
                ktl::u32 * aNeedBytes);

            NTSTATUS ReferenceObjectName(
                void * aObject,
                UNICODE_STRING ** aObjectName,
                POOL_TYPE aPoolType = DefaultPoolType,
                ktl::u32 aPoolTag = DefaultPoolTag);
            
            void DeferenceObjectName(
                UNICODE_STRING* aObjectName);
        }
    }
}