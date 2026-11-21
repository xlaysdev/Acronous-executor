/* FUN_1801798a0 @ 1801798a0 */

undefined8 FUN_1801798a0(undefined8 param_1)

{
  ulonglong *puVar1;
  longlong lVar2;
  ulonglong uVar3;
  longlong *plVar4;
  code *pcVar5;
  undefined8 uVar6;
  ulonglong uVar7;
  undefined1 local_21;
  undefined1 *local_20;
  undefined1 *local_18;
  
  lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  puVar1 = (ulonglong *)(lVar2 + 0x70);
  if (*(char *)(lVar2 + 0xb8) != '\x01') {
    local_21 = 1;
    if (*(char *)(lVar2 + 0xb8) == '\x02') goto LAB_1801798d6;
    FUN_1801d8880(puVar1,FUN_18016d130);
    *(undefined1 *)(lVar2 + 0xb8) = 1;
  }
  uVar7 = *puVar1;
  if (uVar7 < 0x7fffffffffffffff) {
    *puVar1 = uVar7 + 1;
    uVar3 = *(ulonglong *)(lVar2 + 0x78);
    if (uVar3 != 2) {
      plVar4 = *(longlong **)(lVar2 + 0x80);
      uVar6 = 1;
      LOCK();
      lVar2 = *plVar4;
      *plVar4 = *plVar4 + 1;
      UNLOCK();
      if ((uVar3 & 1) == 0) {
        if (-1 < lVar2) {
          uVar6 = 0;
          goto LAB_180179961;
        }
      }
      else if (-1 < lVar2) {
LAB_180179961:
        *puVar1 = *puVar1 - 1;
        return uVar6;
      }
                    /* WARNING: Does not return */
      pcVar5 = (code *)invalidInstructionException();
      (*pcVar5)();
    }
  }
  else {
    uVar7 = FUN_180201940(&PTR_s_C__Users_burne__cargo_registry_s_180263b60);
  }
  *puVar1 = uVar7;
  local_21 = 0;
LAB_1801798d6:
  local_20 = &local_21;
  local_18 = &LAB_180179d00;
                    /* WARNING: Subroutine does not return */
  FUN_180201ee0(&DAT_180263a68,&local_20,param_1);
}


