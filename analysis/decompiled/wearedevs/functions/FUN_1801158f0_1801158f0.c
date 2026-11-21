/* FUN_1801158f0 @ 1801158f0 */

longlong * FUN_1801158f0(longlong *param_1,undefined4 *param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 *puVar10;
  
  FUN_180027490();
  puVar10 = (undefined4 *)thunk_FUN_1801d32d0(0x28,8);
  if (puVar10 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_180201705(8,0x28);
  }
  *(undefined8 *)(puVar10 + 8) = *(undefined8 *)(param_2 + 8);
  uVar3 = *param_2;
  uVar4 = param_2[1];
  uVar5 = param_2[2];
  uVar6 = param_2[3];
  uVar7 = param_2[5];
  uVar8 = param_2[6];
  uVar9 = param_2[7];
  puVar10[4] = param_2[4];
  puVar10[5] = uVar7;
  puVar10[6] = uVar8;
  puVar10[7] = uVar9;
  *puVar10 = uVar3;
  puVar10[1] = uVar4;
  puVar10[2] = uVar5;
  puVar10[3] = uVar6;
  lVar1 = *param_1;
  if (lVar1 != 0) {
    puVar2 = (undefined8 *)param_1[1];
    if ((code *)*puVar2 != (code *)0x0) {
      (*(code *)*puVar2)(lVar1);
    }
    if (puVar2[1] != 0) {
      thunk_FUN_1801d3330(lVar1,puVar2[1],puVar2[2]);
    }
  }
  *param_1 = (longlong)puVar10;
  param_1[1] = (longlong)&PTR_FUN_18023f800;
  return param_1;
}


