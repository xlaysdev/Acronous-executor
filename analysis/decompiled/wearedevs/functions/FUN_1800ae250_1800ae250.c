/* FUN_1800ae250 @ 1800ae250 */

undefined8 * FUN_1800ae250(undefined8 *param_1,longlong param_2)

{
  longlong *plVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  byte bVar6;
  undefined4 uStack_b9;
  undefined4 uStack_b5;
  char local_a0 [8];
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined8 local_88;
  byte local_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined1 uStack_50;
  undefined6 uStack_4f;
  undefined1 uStack_49;
  undefined7 uStack_48;
  undefined1 uStack_41;
  undefined1 local_40;
  undefined4 local_3f;
  undefined3 uStack_3b;
  longlong *local_30;
  undefined8 local_28;
  
  local_28 = 0xfffffffffffffffe;
  plVar1 = (longlong *)(param_2 + 0x10);
  FUN_18008bc80(local_a0);
  if (local_a0[0] == '\x04') {
    local_68 = local_88;
    local_78 = local_98;
    uStack_74 = uStack_94;
    uStack_70 = uStack_90;
    uStack_6c = uStack_8c;
    bVar6 = FUN_1800864d0(&local_98);
    if ((bVar6 & local_80) != 0) {
      FUN_18013c010(&local_60,&local_78);
      uVar5 = uStack_54;
      uVar4 = uStack_58;
      uVar3 = uStack_5c;
      uVar2 = local_60;
      local_30 = plVar1;
      if (*plVar1 != 0) {
        FUN_18013c270(plVar1);
        plVar1 = (longlong *)*local_30;
        LOCK();
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          FUN_18013bc70(local_30);
        }
      }
      *(undefined4 *)local_30 = uVar2;
      *(undefined4 *)((longlong)local_30 + 4) = uVar3;
      *(undefined4 *)(local_30 + 1) = uVar4;
      *(undefined4 *)((longlong)local_30 + 0xc) = uVar5;
    }
    FUN_18013c010(&local_60,&local_78);
    param_1[1] = CONCAT44(uStack_5c,local_60);
    param_1[2] = CONCAT44(uStack_54,uStack_58);
    uStack_5c._3_1_ = (undefined1)local_78;
    uStack_58 = (undefined4)(CONCAT44(uStack_74,local_78) >> 8);
    uStack_54._3_1_ = (undefined1)uStack_70;
    uStack_4f = (undefined6)(CONCAT44(uStack_6c,uStack_70) >> 0x10);
    *(undefined1 *)(param_1 + 3) = 0;
    *(ulonglong *)((longlong)param_1 + 0x19) = CONCAT44(uStack_5c,local_60);
    *(ulonglong *)((longlong)param_1 + 0x21) =
         CONCAT44(CONCAT13(uStack_54._3_1_,(int3)((uint)uStack_74 >> 8)),uStack_58);
    param_1[5] = CONCAT62(uStack_4f,(short)uStack_70);
    param_1[6] = local_68;
    *param_1 = 0;
  }
  else {
    FUN_18012e2b0(&local_60,local_a0);
    uStack_b5 = (undefined4)(CONCAT17(uStack_49,CONCAT61(uStack_4f,uStack_50)) >> 0x20);
    uStack_b9 = CONCAT31((int3)uStack_4f,uStack_50);
    param_1[3] = CONCAT44(uStack_b5,uStack_b9);
    param_1[4] = CONCAT17(uStack_41,uStack_48);
    *(ulonglong *)((longlong)param_1 + 9) =
         CONCAT17((char)uStack_58,CONCAT43(uStack_5c,local_60._1_3_));
    *(ulonglong *)((longlong)param_1 + 0x11) =
         CONCAT17(uStack_50,CONCAT43(uStack_54,uStack_58._1_3_));
    *(uint *)((longlong)param_1 + 0x2c) = CONCAT31(uStack_3b,local_3f._3_1_);
    *(undefined4 *)((longlong)param_1 + 0x29) = local_3f;
    *(undefined1 *)(param_1 + 1) = (undefined1)local_60;
    *(undefined1 *)(param_1 + 5) = local_40;
    *param_1 = 1;
  }
  return param_1;
}


