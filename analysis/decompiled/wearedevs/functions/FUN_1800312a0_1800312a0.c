/* FUN_1800312a0 @ 1800312a0 */

longlong FUN_1800312a0(void)

{
  longlong lVar1;
  
  lVar1 = FUN_18016c6f0();
  if (*(char *)(lVar1 + 0x48) != '\x01') {
    if (*(char *)(lVar1 + 0x48) != '\x02') {
      FUN_1801d8880(lVar1,FUN_18002ca60);
      *(undefined1 *)(lVar1 + 0x48) = 1;
      return lVar1;
    }
    lVar1 = 0;
  }
  return lVar1;
}


