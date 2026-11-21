/* FUN_180191c60 @ 180191c60 */

char * FUN_180191c60(uint *param_1,undefined8 param_2)

{
  switch(param_2) {
  case 2:
    if ((short)*param_1 == 0x7377) {
LAB_180191c8b:
      return "lti_thread\\worker.rs";
    }
    break;
  case 3:
    if (*(char *)((longlong)param_1 + 2) == 's' && (short)*param_1 == 0x7377) {
      return "lti_thread\\worker.rs";
    }
    if (*(char *)((longlong)param_1 + 2) == 'p' && (short)*param_1 == 0x7466) {
      return "lti_thread\\worker.rs";
    }
    break;
  case 4:
    if (*param_1 == 0x70747468) goto LAB_180191c8b;
    break;
  case 5:
    if ((char)param_1[1] == 's' && (*param_1 ^ 0x70747468) == 0) {
      return (char *)CONCAT62((uint6)(ushort)((*param_1 ^ 0x70747468) >> 0x10),1);
    }
  }
  return (char *)0x0;
}


