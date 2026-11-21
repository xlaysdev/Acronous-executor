/* FUN_1800681a0 @ 1800681a0 */

longlong *
FUN_1800681a0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  longlong *plVar6;
  undefined8 uVar7;
  
  uVar7 = param_1;
  plVar3 = (longlong *)FUN_180115ea0(0);
  uVar5 = param_1;
  plVar6 = plVar3;
  FUN_180027490();
  puVar4 = (undefined8 *)thunk_FUN_1801d32d0(8,8);
  if (puVar4 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_180201705(8,8);
  }
  *puVar4 = param_1;
  lVar1 = *plVar3;
  if (lVar1 != 0) {
    puVar2 = (undefined8 *)plVar3[1];
    if ((code *)*puVar2 != (code *)0x0) {
      (*(code *)*puVar2)(lVar1);
    }
    if (puVar2[1] != 0) {
      thunk_FUN_1801d3330(lVar1,puVar2[1],puVar2[2],param_4,uVar5,plVar6,uVar7);
    }
  }
  *plVar3 = (longlong)puVar4;
  plVar3[1] = (longlong)&PTR_FUN_18020b168;
  return plVar3;
}


