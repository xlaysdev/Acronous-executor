/* FUN_1801c1690 @ 1801c1690 */

undefined8 FUN_1801c1690(void)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)FUN_1801c4a30(0);
  if (*plVar1 == 0) {
    plVar1 = (longlong *)FUN_1801c3360();
    return *(undefined8 *)(*plVar1 + 0x208);
  }
  return *(undefined8 *)(*(longlong *)(*plVar1 + 0x110) + 0x208);
}


