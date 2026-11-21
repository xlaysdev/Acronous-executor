/* FUN_18016c640 @ 18016c640 */

void FUN_18016c640(longlong *param_1)

{
  longlong lVar1;
  int *piVar2;
  code *pcVar3;
  
  lVar1 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if (*(char *)(lVar1 + 0xb8) != '\x01') {
    if (*(char *)(lVar1 + 0xb8) == '\x02') goto LAB_18016c6ca;
    FUN_1801d8880(lVar1 + 0x70,FUN_18016d130);
    *(undefined1 *)(lVar1 + 0xb8) = 1;
  }
  if ((*(char *)(lVar1 + 0xb6) == '\x02') ||
     (piVar2 = *(int **)(lVar1 + 0x98), piVar2 == (int *)0x0)) {
LAB_18016c6ca:
                    /* WARNING: Could not recover jumptable at 0x00018016c6d7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x10))(param_1[1]);
    return;
  }
  if (*piVar2 == 1) {
    if (0x7ffffffffffffffe < *(ulonglong *)(piVar2 + 4)) {
      FUN_180201940(&PTR_s_C__Users_burne__cargo_registry_s_180265050);
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    if (*(longlong *)(piVar2 + 6) == 0) goto LAB_18016c6ca;
  }
  FUN_180165520(piVar2 + 8,param_1);
  return;
}


