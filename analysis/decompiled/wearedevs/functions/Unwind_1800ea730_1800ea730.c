/* Unwind@1800ea730 @ 1800ea730 */

void Unwind_1800ea730(undefined8 param_1,longlong param_2)

{
  short *psVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  longlong lVar5;
  
  psVar1 = *(short **)(param_2 + 0x5a8);
  uVar2 = *(undefined8 *)(param_2 + 0x5b0);
  uVar3 = *(undefined8 *)(param_2 + 0x5b8);
  uVar4 = *(undefined8 *)(param_2 + 0x5c0);
  if (*psVar1 == 3) {
    *(undefined8 *)(param_2 + 0x530) = uVar4;
    *(undefined8 *)(param_2 + 0x528) = uVar3;
    *(undefined8 *)(param_2 + 0x520) = uVar2;
    *(short **)(param_2 + 0x518) = psVar1;
    return;
  }
  lVar5 = *(longlong *)(param_2 + 0x600);
  if (*(char *)(lVar5 + 0xf38) == '\0') {
    *(undefined8 *)(param_2 + 0x530) = uVar4;
    *(undefined8 *)(param_2 + 0x528) = uVar3;
    *(undefined8 *)(param_2 + 0x520) = uVar2;
    *(short **)(param_2 + 0x518) = psVar1;
    return;
  }
  FUN_18000a9e0(*(undefined8 *)(lVar5 + 0xbc8),*(undefined8 *)(lVar5 + 0xbd0));
  *(undefined8 *)(param_2 + 0x530) = uVar4;
  *(undefined8 *)(param_2 + 0x528) = uVar3;
  *(undefined8 *)(param_2 + 0x520) = uVar2;
  *(short **)(param_2 + 0x518) = psVar1;
  return;
}


