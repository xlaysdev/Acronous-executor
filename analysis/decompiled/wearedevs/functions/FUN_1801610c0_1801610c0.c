/* FUN_1801610c0 @ 1801610c0 */

undefined8 FUN_1801610c0(undefined8 *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  code *pcVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  longlong lVar6;
  ulonglong uVar7;
  longlong *plVar8;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  
  plVar2 = (longlong *)param_1[1];
  lVar6 = *(longlong *)*param_1;
  *(longlong *)*param_1 = 0;
  pcVar3 = *(code **)(lVar6 + 0x38);
  *(undefined8 *)(lVar6 + 0x38) = 0;
  if (pcVar3 == (code *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_180201ee0("Lazy instance has previously been poisonedC:\\Users\\burne\\.cargo\\registry\\src\\index.crates.io-1949cf8c6b5b557f\\once_cell-1.21.4\\src\\lib.rs"
                  ,0x55,&DAT_18025f930);
  }
  (*pcVar3)(&local_50);
  plVar4 = (longlong *)*plVar2;
  if (*plVar4 != 0) {
    lVar6 = plVar4[5];
    if (lVar6 != 0) {
      plVar8 = (longlong *)(plVar4[4] + 0x10);
      do {
        if ((plVar8[-2] != 0) && (plVar8[-1] != -1)) {
          LOCK();
          plVar1 = (longlong *)(plVar8[-1] + 8);
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (*plVar1 == 0) {
            uVar7 = *(ulonglong *)(*plVar8 + 0x10);
            if (uVar7 < 9) {
              uVar7 = 8;
            }
            if ((-uVar7 & *(longlong *)(*plVar8 + 8) + uVar7 + 0xf) != 0) {
              thunk_FUN_1801d3330();
            }
          }
        }
        plVar8 = plVar8 + 3;
        lVar6 = lVar6 + -1;
      } while (lVar6 != 0);
    }
    if (plVar4[3] != 0) {
      thunk_FUN_1801d3330(plVar4[4],plVar4[3] * 0x18,8);
    }
  }
  puVar5 = (undefined8 *)*plVar2;
  *puVar5 = 1;
  puVar5[1] = local_50;
  puVar5[2] = uStack_48;
  puVar5[3] = local_40;
  puVar5[4] = uStack_38;
  puVar5[5] = local_30;
  return CONCAT71((int7)((ulonglong)puVar5 >> 8),1);
}


