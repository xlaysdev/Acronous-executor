/* Unwind@18013b890 @ 18013b890 */

void Unwind_18013b890(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  
  thunk_FUN_1801d3330(*(undefined8 *)(param_2 + 0x20),0x20,8);
  lVar1 = *(longlong *)(param_2 + 0x28);
  (**(code **)(*(longlong *)(lVar1 + 0x70) + 0x20))
            (*(undefined8 *)(lVar1 + 0x88),*(undefined8 *)(lVar1 + 0x78),
             *(undefined8 *)(lVar1 + 0x80));
  return;
}


