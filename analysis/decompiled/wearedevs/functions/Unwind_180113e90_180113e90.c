/* Unwind@180113e90 @ 180113e90 */

void Unwind_180113e90(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(*(longlong *)(param_2 + 0x48) + 0x78);
  if (lVar1 != 0) {
    (**(code **)(lVar1 + 0x18))(*(undefined8 *)(*(longlong *)(param_2 + 0x48) + 0x80));
  }
  return;
}


