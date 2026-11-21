/* Unwind@1800cbb60 @ 1800cbb60 */

void Unwind_1800cbb60(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (*(char *)(param_2 + 0x2b7) == '\0') {
    *(undefined8 *)(param_2 + 0x250) = *(undefined8 *)(param_2 + 0x2a8);
    *(undefined8 *)(param_2 + 0x248) = *(undefined8 *)(param_2 + 0x2a0);
    *(undefined8 *)(param_2 + 0x240) = *(undefined8 *)(param_2 + 0x298);
    *(undefined8 *)(param_2 + 0x238) = *(undefined8 *)(param_2 + 0x290);
    *(undefined1 *)(param_2 + 0x2b6) = 0;
    return;
  }
  lVar1 = *(longlong *)(param_2 + 0x290);
  pcVar2 = *(code **)(lVar1 + 0x20);
  uVar3 = *(undefined8 *)(param_2 + 0x2a8);
  *(undefined8 *)(param_2 + 0x250) = uVar3;
  uVar4 = *(undefined8 *)(param_2 + 0x2a0);
  *(undefined8 *)(param_2 + 0x248) = uVar4;
  uVar5 = *(undefined8 *)(param_2 + 0x298);
  *(undefined8 *)(param_2 + 0x240) = uVar5;
  *(longlong *)(param_2 + 0x238) = lVar1;
  *(undefined1 *)(param_2 + 0x2b6) = 0;
  (*pcVar2)(uVar3,uVar5,uVar4);
  *(undefined8 *)(param_2 + 0x250) = uVar3;
  *(undefined8 *)(param_2 + 0x248) = uVar4;
  *(undefined8 *)(param_2 + 0x240) = uVar5;
  *(longlong *)(param_2 + 0x238) = lVar1;
  *(undefined1 *)(param_2 + 0x2b6) = 0;
  return;
}


