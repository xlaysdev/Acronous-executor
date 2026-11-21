/* Unwind@1801b7a10 @ 1801b7a10 */

void Unwind_1801b7a10(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if (**(longlong **)(param_2 + 0x158) != 0) {
    thunk_FUN_1801d3330(*(undefined8 *)(*(longlong *)(param_2 + 0x158) + 8),
                        **(longlong **)(param_2 + 0x158) * 0x70,8);
  }
  puVar1 = *(undefined8 **)(param_2 + 0x158);
  puVar1[2] = *(undefined8 *)(param_2 + 0xa0);
  uVar2 = *(undefined8 *)(param_2 + 0x98);
  *puVar1 = *(undefined8 *)(param_2 + 0x90);
  puVar1[1] = uVar2;
  return;
}


