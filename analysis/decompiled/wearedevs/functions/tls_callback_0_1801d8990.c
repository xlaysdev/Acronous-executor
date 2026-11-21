/* tls_callback_0 @ 1801d8990 */

void tls_callback_0(undefined8 param_1,int param_2)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 uVar3;
  code *pcVar4;
  LPVOID lpMem;
  ulonglong uVar5;
  longlong lVar6;
  HANDLE hHeap;
  longlong local_28 [2];
  
  local_28[1] = 0xfffffffffffffffe;
  if ((param_2 != 3) && (param_2 != 0)) {
    return;
  }
  lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if (*(longlong *)(lVar2 + 0xf0) == 0) {
    plVar1 = (longlong *)(lVar2 + 0xf0);
    do {
      *plVar1 = -1;
      if (*(longlong *)(lVar2 + 0x108) == 0) {
        if (*(longlong *)(lVar2 + 0xf8) == 0) {
          lVar6 = 0;
        }
        else {
          lpMem = *(LPVOID *)(lVar2 + 0x100);
          hHeap = GetProcessHeap();
          HeapFree(hHeap,0,lpMem);
          lVar6 = *plVar1 + 1;
        }
        *(undefined8 *)(lVar2 + 0xf8) = 0;
        *(undefined8 *)(lVar2 + 0x100) = 8;
        *(undefined8 *)(lVar2 + 0x108) = 0;
        *plVar1 = lVar6;
        lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
        uVar5 = *(ulonglong *)(lVar2 + 0x130);
        if (uVar5 < 3) {
          return;
        }
        *(undefined8 *)(lVar2 + 0x130) = 2;
        local_28[0] = uVar5 - 0x10;
        LOCK();
        plVar1 = (longlong *)(uVar5 - 0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          FUN_1801e3970(local_28);
          return;
        }
        return;
      }
      lVar6 = *(longlong *)(lVar2 + 0x108) + -1;
      *(longlong *)(lVar2 + 0x108) = lVar6;
      lVar6 = lVar6 * 0x10;
      uVar3 = *(undefined8 *)(*(longlong *)(lVar2 + 0x100) + lVar6);
      pcVar4 = *(code **)(*(longlong *)(lVar2 + 0x100) + 8 + lVar6);
      *plVar1 = 0;
      (*pcVar4)(uVar3);
    } while (*plVar1 == 0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_1802018f0(&PTR_s_library_std_src_sys_thread_local_18028f518);
}


