/* FUN_180101530 @ 180101530 */

undefined8 FUN_180101530(undefined1 param_1)

{
  int iVar1;
  undefined8 local_8;
  
  local_8 = 0;
  iVar1 = QueryContextAttributesW(param_1,0x53,&local_8);
  if (iVar1 == 0) {
    return 0;
  }
  return 1;
}


