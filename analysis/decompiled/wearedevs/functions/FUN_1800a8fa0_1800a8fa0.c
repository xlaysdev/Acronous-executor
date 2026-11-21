/* FUN_1800a8fa0 @ 1800a8fa0 */

void * FUN_1800a8fa0(void *param_1,undefined8 *param_2,void *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined1 local_2b8 [512];
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined1 local_38;
  undefined7 uStack_37;
  undefined8 local_30;
  
  local_30 = 0xfffffffffffffffe;
  memcpy(local_2b8,param_3,0x200);
  local_b8 = *(undefined4 *)param_2;
  uStack_b4 = *(undefined4 *)((longlong)param_2 + 4);
  uStack_b0 = *(undefined4 *)(param_2 + 1);
  uStack_ac = *(undefined4 *)((longlong)param_2 + 0xc);
  local_a8 = *(undefined4 *)(param_2 + 2);
  uStack_a4 = *(undefined4 *)((longlong)param_2 + 0x14);
  uStack_a0 = *(undefined4 *)(param_2 + 3);
  uStack_9c = *(undefined4 *)((longlong)param_2 + 0x1c);
  local_98 = *(undefined4 *)(param_2 + 4);
  uStack_94 = *(undefined4 *)((longlong)param_2 + 0x24);
  uStack_90 = *(undefined4 *)(param_2 + 5);
  uStack_8c = *(undefined4 *)((longlong)param_2 + 0x2c);
  local_38 = 3;
  local_80 = 0;
  FUN_180027490();
  puVar6 = (undefined8 *)thunk_FUN_1801d32d0(0x28,8);
  if (puVar6 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_180201705(8,0x28);
  }
  puVar6[4] = local_60;
  puVar6[2] = local_70;
  puVar6[3] = uStack_68;
  *puVar6 = local_80;
  puVar6[1] = uStack_78;
  memcpy(param_1,param_3,0x200);
  uVar1 = param_2[1];
  uVar2 = param_2[2];
  uVar3 = param_2[3];
  uVar4 = param_2[4];
  uVar5 = param_2[5];
  *(undefined8 *)((longlong)param_1 + 0x200) = *param_2;
  *(undefined8 *)((longlong)param_1 + 0x208) = uVar1;
  *(undefined8 *)((longlong)param_1 + 0x210) = uVar2;
  *(undefined8 *)((longlong)param_1 + 0x218) = uVar3;
  *(undefined8 *)((longlong)param_1 + 0x220) = uVar4;
  *(undefined8 *)((longlong)param_1 + 0x228) = uVar5;
  *(undefined8 *)((longlong)param_1 + 0x230) = local_58;
  *(undefined8 *)((longlong)param_1 + 0x238) = uStack_50;
  *(undefined8 *)((longlong)param_1 + 0x240) = local_48;
  *(undefined8 *)((longlong)param_1 + 0x248) = uStack_40;
  *(ulonglong *)((longlong)param_1 + 0x250) = CONCAT71(uStack_37,local_38);
  *(undefined8 **)((longlong)param_1 + 600) = puVar6;
  *(undefined1 *)((longlong)param_1 + 0x260) = 0;
  return param_1;
}


