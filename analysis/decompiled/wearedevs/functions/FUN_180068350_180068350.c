/* FUN_180068350 @ 180068350 */

longlong *
FUN_180068350(undefined4 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  longlong *plVar10;
  undefined4 *puVar11;
  longlong *plVar12;
  
  plVar10 = (longlong *)FUN_1801158a0(8);
  plVar12 = plVar10;
  FUN_180027490();
  puVar11 = (undefined4 *)thunk_FUN_1801d32d0(0x28,8);
  if (puVar11 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_180201705(8,0x28);
  }
  *(undefined8 *)(puVar11 + 8) = *(undefined8 *)(param_1 + 8);
  uVar3 = *param_1;
  uVar4 = param_1[1];
  uVar5 = param_1[2];
  uVar6 = param_1[3];
  uVar7 = param_1[5];
  uVar8 = param_1[6];
  uVar9 = param_1[7];
  puVar11[4] = param_1[4];
  puVar11[5] = uVar7;
  puVar11[6] = uVar8;
  puVar11[7] = uVar9;
  *puVar11 = uVar3;
  puVar11[1] = uVar4;
  puVar11[2] = uVar5;
  puVar11[3] = uVar6;
  lVar1 = *plVar10;
  if (lVar1 != 0) {
    puVar2 = (undefined8 *)plVar10[1];
    if ((code *)*puVar2 != (code *)0x0) {
      (*(code *)*puVar2)(lVar1);
    }
    if (puVar2[1] != 0) {
      thunk_FUN_1801d3330(lVar1,puVar2[1],puVar2[2],param_4,plVar12);
    }
  }
  *plVar10 = (longlong)puVar11;
  plVar10[1] = (longlong)&PTR_FUN_18020b438;
  return plVar10;
}


