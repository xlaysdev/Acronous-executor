/* FUN_18016b780 @ 18016b780 */

int * FUN_18016b780(int *param_1,longlong param_2)

{
  char *pcVar1;
  undefined1 uVar2;
  longlong lVar3;
  undefined *puVar4;
  byte bVar5;
  char cVar6;
  longlong lVar7;
  ulonglong *puVar8;
  ulonglong uVar9;
  bool bVar10;
  
  FUN_18016fa90(param_2 + 0xf0,0);
  while( true ) {
    if (*(longlong *)(param_1 + 0x16) == 0) {
      *(undefined8 *)(param_2 + 0x18) = 0;
      pcVar1 = (char *)(param_2 + 0x128);
      LOCK();
      bVar10 = *(char *)(param_2 + 0x128) == '\0';
      if (bVar10) {
        *(char *)(param_2 + 0x128) = '\x01';
      }
      UNLOCK();
      if (!bVar10) {
        FUN_180200390(pcVar1);
      }
      puVar4 = PTR_DAT_1802fd600;
      if ((*(ulonglong *)PTR_DAT_1802fd600 & 0x7fffffffffffffff) == 0) {
        bVar5 = 0;
        uVar2 = *(undefined1 *)(param_2 + 0x129);
        cVar6 = *(char *)(param_2 + 0x140);
      }
      else {
        bVar5 = FUN_180200a50();
        bVar5 = bVar5 ^ 1;
        uVar2 = *(undefined1 *)(param_2 + 0x129);
        cVar6 = *(char *)(param_2 + 0x140);
      }
      if (cVar6 == '\0') {
        *(undefined1 *)(param_2 + 0x140) = 1;
      }
      if (((bVar5 == 0) && ((*(ulonglong *)puVar4 & 0x7fffffffffffffff) != 0)) &&
         (cVar6 = FUN_180200a50(uVar2), cVar6 == '\0')) {
        *(undefined1 *)(param_2 + 0x129) = 1;
      }
      LOCK();
      cVar6 = *pcVar1;
      *pcVar1 = '\0';
      UNLOCK();
      if (cVar6 == '\x02') {
        WakeByAddressSingle(pcVar1);
      }
      while( true ) {
        puVar8 = (ulonglong *)FUN_180176c60(pcVar1);
        if (puVar8 == (ulonglong *)0x0) {
          if (*(longlong *)(param_2 + 0x108) != 0) {
                    /* WARNING: Subroutine does not return */
            FUN_180201ec0(&DAT_1802611c8,0x30,&PTR_s_C__Users_burne__cargo_registry_s_1802611f8);
          }
          *(undefined8 *)(param_2 + 0x10) = *(undefined8 *)(param_1 + 0x18);
          *(undefined8 *)(param_2 + 0x20) = *(undefined8 *)(param_1 + 0x1a);
          *(undefined8 *)(param_2 + 0x28) = *(undefined8 *)(param_1 + 0x1c);
          if (*param_1 != 3) {
            FUN_180164ad0(param_1,param_2 + 0x1a0);
          }
          return param_1;
        }
        LOCK();
        uVar9 = *puVar8;
        *puVar8 = *puVar8 - 0x40;
        UNLOCK();
        if (uVar9 < 0x40) break;
        if ((uVar9 & 0xffffffffffffffc0) == 0x40) {
          (**(code **)(puVar8[2] + 0x10))(puVar8);
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_180201ec0("assertion failed: prev.ref_count() >= 1",0x27,
                    &PTR_s_C__Users_burne__cargo_registry_s_180263618);
    }
    lVar3 = *(longlong *)(param_1 + 0x14);
    uVar9 = *(ulonglong *)(param_1 + 0x10);
    if (lVar3 + 1U < uVar9) {
      uVar9 = 0;
    }
    *(ulonglong *)(param_1 + 0x14) = (lVar3 - uVar9) + 1;
    lVar7 = *(longlong *)(param_1 + 0x16) + -1;
    *(longlong *)(param_1 + 0x16) = lVar7;
    puVar8 = *(ulonglong **)(*(longlong *)(param_1 + 0x12) + lVar3 * 8);
    *(longlong *)(param_2 + 0x18) = lVar7;
    LOCK();
    uVar9 = *puVar8;
    *puVar8 = *puVar8 - 0x40;
    UNLOCK();
    if (uVar9 < 0x40) break;
    if ((uVar9 & 0xffffffffffffffc0) == 0x40) {
      (**(code **)(puVar8[2] + 0x10))();
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_180201ec0("assertion failed: prev.ref_count() >= 1",0x27,
                &PTR_s_C__Users_burne__cargo_registry_s_180263618);
}


