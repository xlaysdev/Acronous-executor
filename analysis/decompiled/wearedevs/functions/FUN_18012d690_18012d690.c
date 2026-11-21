/* FUN_18012d690 @ 18012d690 */

longlong FUN_18012d690(char *param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 8);
  if (*param_1 != '\x04') {
    if (*param_1 == '\x01') {
      (**(code **)(lVar1 + 0x20))
                (*(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x10),
                 *(undefined8 *)(param_1 + 0x18));
    }
    lVar1 = 0;
  }
  return lVar1;
}


