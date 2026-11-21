/* FUN_18008f930 @ 18008f930 */

void FUN_18008f930(undefined1 *param_1,byte *param_2)

{
  undefined2 uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *unaff_RBX;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 *local_40;
  uint local_34;
  undefined8 local_30;
  
  local_30 = 0xfffffffffffffffe;
  local_34 = (uint)*param_2;
  if (*param_2 != 0) {
    if (local_34 == 1) {
      unaff_RBX = (undefined8 *)(ulonglong)param_2[1];
    }
    else {
      puVar2 = *(undefined8 **)(param_2 + 8);
      FUN_180027490();
      local_40 = (undefined8 *)thunk_FUN_1801d32d0(0x20,8);
      if (local_40 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_180201705(8,0x20);
      }
      unaff_RBX = puVar2 + 3;
      (**(code **)*puVar2)(&local_78,unaff_RBX,puVar2[1],puVar2[2]);
      *(undefined4 *)(local_40 + 2) = local_68;
      *(undefined4 *)((longlong)local_40 + 0x14) = uStack_64;
      *(undefined4 *)(local_40 + 3) = uStack_60;
      *(undefined4 *)((longlong)local_40 + 0x1c) = uStack_5c;
      *local_40 = local_78;
      local_40[1] = uStack_70;
    }
  }
  (*(code *)**(undefined8 **)(param_2 + 0x10))
            (&local_78,param_2 + 0x28,*(undefined8 *)(param_2 + 0x18),
             *(undefined8 *)(param_2 + 0x20));
  uVar4 = uStack_70;
  uVar3 = local_78;
  local_50 = CONCAT44(uStack_64,local_68);
  local_48 = CONCAT44(uStack_5c,uStack_60);
  (*(code *)**(undefined8 **)(param_2 + 0x30))
            (&local_78,param_2 + 0x48,*(undefined8 *)(param_2 + 0x38),
             *(undefined8 *)(param_2 + 0x40));
  *(ulonglong *)(param_1 + 0x40) = CONCAT44(uStack_64,local_68);
  *(ulonglong *)(param_1 + 0x48) = CONCAT44(uStack_5c,uStack_60);
  *(undefined8 *)(param_1 + 0x30) = local_78;
  *(undefined8 *)(param_1 + 0x38) = uStack_70;
  uVar1 = *(undefined2 *)(param_2 + 0x50);
  *param_1 = (char)local_34;
  param_1[1] = (char)unaff_RBX;
  *(undefined8 **)(param_1 + 8) = local_40;
  *(undefined8 *)(param_1 + 0x10) = uVar3;
  *(undefined8 *)(param_1 + 0x18) = uVar4;
  *(undefined8 *)(param_1 + 0x20) = local_50;
  *(undefined8 *)(param_1 + 0x28) = local_48;
  *(undefined2 *)(param_1 + 0x50) = uVar1;
  return;
}


