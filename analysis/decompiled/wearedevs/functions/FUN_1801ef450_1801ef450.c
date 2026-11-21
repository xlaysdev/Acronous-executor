/* FUN_1801ef450 @ 1801ef450 */

uint FUN_1801ef450(longlong *param_1)

{
  undefined8 *puVar1;
  uint uVar2;
  undefined8 in_RAX;
  undefined8 uVar3;
  
  if (*param_1 == 0) {
    return (uint)*(byte *)(param_1 + 2);
  }
  uVar2 = (uint)CONCAT71((int7)((ulonglong)in_RAX >> 8),1);
  if (*(byte *)(param_1 + 2) == 0) {
    puVar1 = (undefined8 *)param_1[1];
    if (((*param_1 == 1) && (*(char *)((longlong)param_1 + 0x11) != '\0')) &&
       ((*(byte *)((longlong)puVar1 + 0x12) & 0x80) == 0)) {
      uVar3 = (**(code **)(puVar1[1] + 0x18))(*puVar1,",",1);
      uVar2 = (uint)CONCAT71((int7)((ulonglong)uVar3 >> 8),1);
      if ((char)uVar3 != '\0') goto LAB_1801ef4ce;
    }
    uVar2 = (**(code **)(puVar1[1] + 0x18))(*puVar1,")",1);
  }
LAB_1801ef4ce:
  *(char *)(param_1 + 2) = (char)uVar2;
  return uVar2;
}


