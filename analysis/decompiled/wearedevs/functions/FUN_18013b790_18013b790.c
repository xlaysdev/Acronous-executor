/* FUN_18013b790 @ 18013b790 */

void FUN_18013b790(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  if ((10 < *(byte *)(param_1 + 0xb8)) && (*(longlong *)(param_1 + 200) != 0)) {
    thunk_FUN_1801d3330(*(undefined8 *)(param_1 + 0xc0),*(longlong *)(param_1 + 200),1);
  }
  if (1 < *(byte *)(param_1 + 0x60)) {
    plVar1 = *(longlong **)(param_1 + 0x68);
    (**(code **)(*plVar1 + 0x20))(plVar1[3],plVar1[1],plVar1[2]);
    thunk_FUN_1801d3330(plVar1,0x20,8);
  }
  (**(code **)(*(longlong *)(param_1 + 0x70) + 0x20))
            (*(undefined8 *)(param_1 + 0x88),*(undefined8 *)(param_1 + 0x78),
             *(undefined8 *)(param_1 + 0x80));
  (**(code **)(*(longlong *)(param_1 + 0x90) + 0x20))
            (*(undefined8 *)(param_1 + 0xa8),*(undefined8 *)(param_1 + 0x98),
             *(undefined8 *)(param_1 + 0xa0));
  FUN_18013b000(param_1);
  lVar2 = *(longlong *)(param_1 + 0xd0);
  if (lVar2 == 0) {
    return;
  }
  FUN_18002a190();
  thunk_FUN_1801d3330(lVar2,0x20,8);
  return;
}


