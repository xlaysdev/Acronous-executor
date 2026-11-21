/* FUN_1801e4e80 @ 1801e4e80 */

longlong * FUN_1801e4e80(longlong *param_1,undefined8 *param_2)

{
  ushort uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ushort *puVar4;
  int iVar5;
  ushort uVar6;
  bool bVar7;
  byte local_51;
  int local_50;
  undefined8 local_4c;
  undefined4 local_44;
  undefined8 local_40;
  undefined4 local_38;
  
  uVar2 = *param_2;
  uVar3 = param_2[1];
  uVar1 = *(ushort *)(param_2 + 2);
  FUN_1801f19d0(&local_51,uVar2,uVar3);
  if (local_51 == 2) {
    FUN_1801d8180(param_1,uVar2,uVar3,uVar1);
  }
  else {
    bVar7 = (local_51 & 1) == 0;
    if (bVar7) {
      iVar5 = local_50;
      uVar6 = uVar1;
    }
    else {
      local_38 = local_44;
      local_40 = local_4c;
      iVar5 = local_50 << 0x10;
      uVar6 = (ushort)((uint)local_50 >> 0x10);
    }
    FUN_180027490();
    puVar4 = (ushort *)thunk_FUN_1801d32d0(0x20,4);
    if (puVar4 == (ushort *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_180201705(4,0x20);
    }
    *puVar4 = (ushort)!bVar7;
    *(int *)(puVar4 + 1) = iVar5;
    puVar4[3] = uVar6;
    *(undefined8 *)(puVar4 + 4) = local_40;
    *(undefined4 *)(puVar4 + 8) = local_38;
    puVar4[10] = 0;
    puVar4[0xb] = 0;
    puVar4[0xc] = 0;
    puVar4[0xd] = 0;
    puVar4[0xe] = uVar1;
    *param_1 = (longlong)puVar4;
    param_1[1] = (longlong)puVar4;
    param_1[2] = 1;
    param_1[3] = (longlong)(puVar4 + 0x10);
  }
  return param_1;
}


