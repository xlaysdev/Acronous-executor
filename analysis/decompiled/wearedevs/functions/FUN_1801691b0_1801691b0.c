/* FUN_1801691b0 @ 1801691b0 */

void FUN_1801691b0(longlong *param_1)

{
  longlong lVar1;
  undefined *puVar2;
  char cVar3;
  bool bVar4;
  
  LOCK();
  lVar1 = *param_1;
  *param_1 = 2;
  UNLOCK();
  if (lVar1 != 0) {
    if (lVar1 == 1) {
      LOCK();
      bVar4 = *(char *)((longlong)param_1 + 0xc) == '\0';
      if (bVar4) {
        *(char *)((longlong)param_1 + 0xc) = '\x01';
      }
      UNLOCK();
      if (!bVar4) {
        FUN_180200390((longlong)param_1 + 0xc);
      }
      puVar2 = PTR_DAT_1802fd600;
      if (((((*(ulonglong *)PTR_DAT_1802fd600 & 0x7fffffffffffffff) == 0) ||
           (cVar3 = FUN_180200a50(), cVar3 != '\0')) &&
          ((*(ulonglong *)puVar2 & 0x7fffffffffffffff) != 0)) &&
         (cVar3 = FUN_180200a50(), cVar3 == '\0')) {
        *(undefined1 *)((longlong)param_1 + 0xd) = 1;
      }
      LOCK();
      cVar3 = *(char *)((longlong)param_1 + 0xc);
      *(char *)((longlong)param_1 + 0xc) = '\0';
      UNLOCK();
      if (cVar3 == '\x02') {
        WakeByAddressSingle((longlong)param_1 + 0xc);
      }
      FUN_1801df5c0(param_1 + 1);
      return;
    }
    if (lVar1 != 2) {
                    /* WARNING: Subroutine does not return */
      FUN_180201ee0("inconsistent state in unpark",0x39,
                    &PTR_s_C__Users_burne__cargo_registry_s_180260de8);
    }
  }
  return;
}


