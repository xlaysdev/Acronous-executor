/* Unwind@1800dc5d0 @ 1800dc5d0 */

void Unwind_1800dc5d0(undefined8 param_1,longlong param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  
  pcVar1 = *(code **)(*(longlong *)(param_2 + 0x1420) + 0x20);
  uVar2 = *(undefined8 *)(param_2 + 0x19a0);
  *(undefined8 *)(param_2 + 0x1960) = uVar2;
  (*pcVar1)(*(undefined8 *)(param_2 + 0x1438),*(undefined8 *)(param_2 + 0x1428),
            *(undefined8 *)(param_2 + 0x1430));
  *(undefined8 *)(param_2 + 0x1960) = uVar2;
  return;
}


