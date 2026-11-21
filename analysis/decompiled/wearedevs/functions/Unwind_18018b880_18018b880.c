/* Unwind@18018b880 @ 18018b880 */

void Unwind_18018b880(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_2 + 0x88);
  *(undefined8 *)(lVar1 + 0xd8) = 2;
  *(undefined8 *)(lVar1 + 0xe0) = *(undefined8 *)(param_2 + 0x68);
  *(undefined8 *)(lVar1 + 0xe8) = *(undefined8 *)(param_2 + 0x80);
  *(undefined8 *)(lVar1 + 0xf0) = *(undefined8 *)(param_2 + 0x70);
  *(undefined8 *)(lVar1 + 0xf8) = *(undefined8 *)(param_2 + 0x98);
  return;
}


