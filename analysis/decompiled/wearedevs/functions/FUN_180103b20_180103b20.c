/* FUN_180103b20 @ 180103b20 */

void FUN_180103b20(undefined1 param_1)

{
  char cVar1;
  void *_Dst;
  undefined8 *puVar2;
  uint uVar3;
  void *local_e8;
  undefined ***local_e0;
  undefined8 local_d8;
  undefined *local_d0;
  undefined1 local_b7;
  undefined1 local_b0;
  undefined1 *local_50;
  code *local_48;
  undefined *local_40;
  undefined1 **local_38;
  undefined **local_30;
  undefined *local_28;
  undefined1 local_19;
  undefined8 local_18;
  
  local_18 = 0xfffffffffffffffe;
  local_19 = param_1;
  if ((*(ulonglong *)PTR_DAT_1802fd448 < 4) &&
     (((uVar3 = (uint)DAT_1802fb068, uVar3 - 1 < 2 ||
       ((uVar3 != 0 && (uVar3 = FUN_1801faaf0(&PTR_DAT_1802fb058), (char)uVar3 != '\0')))) &&
      (cVar1 = FUN_1801601d0(PTR_DAT_1802fb058,uVar3), cVar1 != '\0')))) {
    local_d0 = PTR_DAT_1802fb058 + 0x30;
    local_50 = &local_19;
    local_48 = FUN_1801ae140;
    local_40 = &DAT_180239d10;
    local_38 = &local_50;
    local_30 = &local_40;
    local_28 = &DAT_180239d38;
    local_e8 = (void *)0x1;
    local_e0 = &local_30;
    local_d8 = 1;
    FUN_180160ae0(PTR_DAT_1802fb058,&local_e8);
  }
  local_e8 = (void *)0x3;
  local_e0 = (undefined ***)0x0;
  local_b7 = 2;
  local_b0 = 4;
  FUN_180027490();
  _Dst = (void *)thunk_FUN_1801d32d0(0x98,8);
  if (_Dst == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_180201705(8,0x98);
  }
  memcpy(_Dst,&local_e8,0x98);
  local_e8 = _Dst;
  FUN_180027490();
  puVar2 = (undefined8 *)thunk_FUN_1801d32d0(8,8);
  if (puVar2 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_180201705(8,8);
  }
  *puVar2 = _Dst;
  return;
}


