/* Unwind@1800f5030 @ 1800f5030 */

void Unwind_1800f5030(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_2 + 0x1340);
  *(undefined1 *)(lVar1 + 0x5ad) = 0;
  if (*(char *)(lVar1 + 0x5ae) == '\0') {
    return;
  }
  FUN_18000adf0(param_2 + 0x11f8);
  return;
}


