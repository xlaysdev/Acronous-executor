/* FUN_1801b9990 @ 1801b9990 */

undefined8 FUN_1801b9990(undefined8 param_1,undefined4 *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  longlong local_30;
  
  plVar4 = (longlong *)FUN_1801c4a30();
  if (*plVar4 == 0) {
    plVar4 = (longlong *)FUN_1801c3360();
    lVar2 = *plVar4;
    lVar1 = lVar2 + 0x80;
    plVar4 = (longlong *)FUN_1801c4a30();
    lVar3 = *plVar4;
    if (lVar3 == 0) {
      local_38 = *(undefined8 *)(param_2 + 0x14);
      local_48 = *(undefined8 *)(param_2 + 0x10);
      uStack_40 = *(undefined8 *)(param_2 + 0x12);
      local_88 = *param_2;
      uStack_84 = param_2[1];
      uStack_80 = param_2[2];
      uStack_7c = param_2[3];
      local_78 = param_2[4];
      uStack_74 = param_2[5];
      uStack_70 = param_2[6];
      uStack_6c = param_2[7];
      local_68 = param_2[8];
      uStack_64 = param_2[9];
      uStack_60 = param_2[10];
      uStack_5c = param_2[0xb];
      local_58 = param_2[0xc];
      uStack_54 = param_2[0xd];
      uStack_50 = param_2[0xe];
      uStack_4c = param_2[0xf];
      local_30 = lVar1;
      FUN_1801c02f0(param_1,&PTR_LAB_1802868d0,&local_88);
      return param_1;
    }
    if (*(longlong *)(lVar3 + 0x110) != lVar2) {
      FUN_1801fcb70(param_1,lVar1,lVar3,param_2);
      return param_1;
    }
  }
  FUN_1801b9120(param_1,param_2);
  return param_1;
}


