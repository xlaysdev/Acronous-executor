/* FUN_18006b260 @ 18006b260 */

longlong * FUN_18006b260(longlong *param_1,longlong *param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined2 uVar7;
  undefined4 in_R10D;
  bool bVar8;
  bool bVar9;
  longlong local_48;
  longlong lStack_40;
  longlong local_38;
  longlong *local_30;
  undefined8 local_28;
  
  local_28 = 0xfffffffffffffffe;
  if (SBORROW8(0,*param_1)) {
    lVar3 = *param_2;
    local_30 = param_1;
    uVar7 = FUN_1801ed500(&local_48);
    bVar8 = *(char *)(lVar3 + 0x690) != '\x01';
    if (bVar8) {
      iVar1 = *(int *)(lVar3 + 0x680);
    }
    else {
      uVar7 = *(undefined2 *)(lVar3 + 0x692);
      iVar1 = *(int *)(lVar3 + 0x680);
    }
    if (iVar1 == 1) {
      param_3 = *(undefined4 *)(lVar3 + 0x684);
    }
    uVar4 = *(undefined8 *)(lVar3 + 0x694);
    uVar5 = *(undefined8 *)(lVar3 + 0x69c);
    uVar2 = *(undefined4 *)(lVar3 + 0x6a4);
    bVar9 = *(int *)(lVar3 + 0x688) != 1;
    if (!bVar9) {
      in_R10D = *(undefined4 *)(lVar3 + 0x68c);
    }
    local_30[2] = local_38;
    *local_30 = local_48;
    local_30[1] = lStack_40;
    *(uint *)(local_30 + 3) = (uint)(iVar1 == 1);
    *(undefined4 *)((longlong)local_30 + 0x1c) = param_3;
    *(uint *)(local_30 + 4) = (uint)!bVar9;
    *(undefined4 *)((longlong)local_30 + 0x24) = in_R10D;
    *(ushort *)(local_30 + 5) = (ushort)!bVar8;
    *(undefined2 *)((longlong)local_30 + 0x2a) = uVar7;
    *(undefined8 *)((longlong)local_30 + 0x2c) = uVar4;
    *(undefined8 *)((longlong)local_30 + 0x34) = uVar5;
    *(undefined4 *)((longlong)local_30 + 0x3c) = uVar2;
    lVar6 = *(longlong *)(lVar3 + 0x6b0);
    local_30[8] = *(longlong *)(lVar3 + 0x6a8);
    local_30[9] = lVar6;
    *(undefined1 *)(local_30 + 10) = *(undefined1 *)(lVar3 + 0x6b8);
    param_1 = local_30;
  }
  return param_1;
}


