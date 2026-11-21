/* FUN_180189a50 @ 180189a50 */

/* WARNING: Removing unreachable block (ram,0x000180189ac6) */
/* WARNING: Removing unreachable block (ram,0x000180189ae6) */
/* WARNING: Removing unreachable block (ram,0x000180189aec) */
/* WARNING: Removing unreachable block (ram,0x000180189afd) */
/* WARNING: Removing unreachable block (ram,0x000180189b06) */

void FUN_180189a50(longlong param_1,longlong *param_2,longlong param_3,DWORD param_4)

{
  longlong lVar1;
  code *pcVar2;
  BOOL BVar3;
  
  if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_180201ba0(&PTR_s_C__Users_burne__cargo_registry_s_180265fb0);
  }
  BVar3 = PostQueuedCompletionStatus
                    (*(HANDLE *)(param_1 + 0x10),param_4,param_3 * 2 + 1,
                     (LPOVERLAPPED)(param_2 + 0x11));
  if (BVar3 == 0) {
    GetLastError();
  }
  else {
    LOCK();
    lVar1 = *param_2;
    *param_2 = *param_2 + 1;
    UNLOCK();
    if (*param_2 == 0 || SCARRY8(lVar1,1) != *param_2 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)invalidInstructionException();
      (*pcVar2)();
    }
  }
  return;
}


