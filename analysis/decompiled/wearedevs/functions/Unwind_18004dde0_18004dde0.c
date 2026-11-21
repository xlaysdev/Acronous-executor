/* Unwind@18004dde0 @ 18004dde0 */

void Unwind_18004dde0(undefined8 param_1,longlong param_2)

{
  byte bVar1;
  
  bVar1 = *(byte *)(param_2 + 0x143f);
  if (((*(byte *)(param_2 + 0x1440) & 1) != 0) && (*(longlong *)(param_2 + 0x1210) != 0)) {
    thunk_FUN_1801d3330(*(undefined8 *)(param_2 + 0x1218),*(longlong *)(param_2 + 0x1210),1);
  }
  if (((bVar1 & 1) == 0 && 10 < *(byte *)(param_2 + 0x1380)) &&
     (*(longlong *)(param_2 + 0x1390) != 0)) {
    thunk_FUN_1801d3330(*(undefined8 *)(param_2 + 5000),*(longlong *)(param_2 + 0x1390),1);
  }
  return;
}


