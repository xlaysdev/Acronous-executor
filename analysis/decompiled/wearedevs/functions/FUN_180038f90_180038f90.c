/* FUN_180038f90 @ 180038f90 */

undefined8 * FUN_180038f90(undefined8 *param_1,undefined8 *param_2,byte *param_3)

{
  longlong lVar1;
  byte bVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  longlong lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  longlong *plVar12;
  undefined8 uVar13;
  code *pcVar14;
  
  bVar2 = *param_3;
  plVar3 = *(longlong **)(param_3 + 8);
  lVar4 = *(longlong *)(param_3 + 0x10);
  uVar5 = *(undefined8 *)(param_3 + 0x18);
  uVar6 = *(undefined8 *)(param_3 + 0x20);
  uVar7 = *(undefined8 *)(param_3 + 0x28);
  lVar8 = *(longlong *)(param_3 + 0x30);
  uVar9 = *(undefined8 *)(param_3 + 0x38);
  uVar10 = *(undefined8 *)(param_3 + 0x40);
  uVar11 = *(undefined8 *)(param_3 + 0x48);
  plVar12 = (longlong *)*param_2;
  uVar13 = param_2[1];
  LOCK();
  lVar1 = *plVar12;
  *plVar12 = *plVar12 + 1;
  UNLOCK();
  if (*plVar12 == 0 || SCARRY8(lVar1,1) != *plVar12 < 0) {
                    /* WARNING: Does not return */
    pcVar14 = (code *)invalidInstructionException();
    (*pcVar14)();
  }
  *param_1 = plVar12;
  param_1[1] = uVar13;
  *(undefined1 *)(param_1 + 2) = 0;
  if (1 < bVar2) {
    (**(code **)(*plVar3 + 0x20))(plVar3[3],plVar3[1],plVar3[2]);
    thunk_FUN_1801d3330(plVar3,0x20,8);
  }
  (**(code **)(lVar4 + 0x20))(uVar7,uVar5,uVar6);
  (**(code **)(lVar8 + 0x20))(uVar11,uVar9,uVar10);
  return param_1;
}


