/* FUN_1801ec3b0 @ 1801ec3b0 */

ulonglong FUN_1801ec3b0(void)

{
  ulonglong uVar1;
  undefined8 in_RAX;
  ulonglong in_XCR0;
  
  uVar1 = xinuse(0);
  return CONCAT44((int)((ulonglong)in_RAX >> 0x20),(int)(in_XCR0 & uVar1)) |
         in_XCR0 & uVar1 & 0xffffffff00000000;
}


