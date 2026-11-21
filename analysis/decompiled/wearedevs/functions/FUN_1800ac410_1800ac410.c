/* FUN_1800ac410 @ 1800ac410 */

void FUN_1800ac410(int *param_1)

{
  undefined8 uVar1;
  int iVar2;
  undefined8 local_238;
  undefined8 local_230;
  undefined8 local_138;
  int local_130 [66];
  undefined8 local_28;
  undefined1 local_1a;
  undefined1 local_19;
  undefined8 local_18;
  
  local_18 = 0xfffffffffffffffe;
  iVar2 = param_1[2];
  uVar1 = *(undefined8 *)(param_1 + 4);
  param_1[2] = 0;
  param_1[3] = 0;
  local_28 = uVar1;
  if (*param_1 == 1) {
    if ((char)iVar2 != '\0') {
      local_1a = 1;
      local_230 = FUN_1801f9160();
      local_238 = 3;
      local_1a = 0;
      FUN_1800aa560(local_130,uVar1,&local_238);
      if (local_130[0] != 4) {
        FUN_1800a5890(local_130);
        return;
      }
    }
  }
  else if ((char)iVar2 != '\0') {
    local_19 = 1;
    local_138 = FUN_1801f9160();
    local_238 = 3;
    local_19 = 0;
    FUN_1800aaa30(local_130,uVar1,&local_238);
    if (local_130[0] != 5) {
      FUN_1800a62b0(local_130);
      return;
    }
  }
  return;
}


