/* Unwind@1800dcbb0 @ 1800dcbb0 */

void Unwind_1800dcbb0(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  code *pcVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  thunk_FUN_1801d3330(*(undefined8 *)(param_2 + 0x1950),0x20,8);
  lVar1 = *(longlong *)(param_2 + 0x19a8);
  uVar2 = *(undefined8 *)(lVar1 + 0x8b8);
  uVar3 = *(undefined8 *)(lVar1 + 0x8a8);
  pcVar4 = *(code **)(*(longlong *)(lVar1 + 0x8a0) + 0x20);
  uVar5 = *(undefined8 *)(lVar1 + 0x8b0);
  uVar6 = *(undefined8 *)(param_2 + 0x19a0);
  *(undefined8 *)(param_2 + 0x18a8) = uVar6;
  uVar7 = *(undefined8 *)(param_2 + 0x1990);
  *(undefined8 *)(param_2 + 0x18a0) = uVar7;
  uVar8 = *(undefined8 *)(param_2 + 0x1988);
  *(undefined8 *)(param_2 + 0x1898) = uVar8;
  (*pcVar4)(uVar2,uVar3,uVar5);
  *(undefined8 *)(param_2 + 0x18a8) = uVar6;
  *(undefined8 *)(param_2 + 0x18a0) = uVar7;
  *(undefined8 *)(param_2 + 0x1898) = uVar8;
  return;
}


