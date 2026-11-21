/* FUN_1801c2bd0 @ 1801c2bd0 */

ulonglong FUN_1801c2bd0(longlong param_1)

{
  undefined8 uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  longlong lVar4;
  char local_99;
  longlong local_98;
  ulonglong local_90;
  ulonglong local_88;
  undefined8 local_80;
  undefined8 local_78;
  ulonglong local_70;
  longlong local_68;
  longlong *local_60;
  undefined8 local_58;
  ulonglong local_50;
  char *local_48;
  
  uVar2 = FUN_1801c69f0(param_1 + 0x118);
  uVar3 = local_90;
  if (uVar2 == 0) {
    do {
      FUN_1801c6e10(&local_98,param_1 + 0x138);
    } while (local_98 == 2);
    uVar2 = local_90;
    uVar3 = local_90;
    if (local_98 == 0) {
      uVar2 = 0;
    }
  }
  local_90 = uVar2;
  if (local_90 == 0) {
    lVar4 = *(longlong *)(param_1 + 0x110);
    uVar2 = *(ulonglong *)(lVar4 + 0x208);
    local_90 = uVar3;
    if (1 < uVar2) {
      uVar1 = *(undefined8 *)(lVar4 + 0x200);
      do {
        local_99 = '\0';
        uVar3 = *(ulonglong *)(param_1 + 0x108) >> 0xc ^ *(ulonglong *)(param_1 + 0x108);
        uVar3 = uVar3 << 0x19 ^ uVar3;
        uVar3 = uVar3 >> 0x1b ^ uVar3;
        *(ulonglong *)(param_1 + 0x108) = uVar3;
        local_90 = (uVar3 * 0x2545f4914f6cdd1d) % uVar2;
        local_98 = 1;
        local_80 = 1;
        local_78 = 0;
        local_88 = uVar2;
        local_70 = local_90;
        local_68 = param_1;
        local_60 = &local_68;
        local_58 = uVar1;
        local_50 = uVar2;
        local_48 = &local_99;
        uVar3 = FUN_1801c26f0(&local_98,&local_60);
        if (uVar3 != 0) {
          return uVar3;
        }
      } while (local_99 != '\0');
      lVar4 = *(longlong *)(param_1 + 0x110);
    }
    do {
      FUN_1801c71c0(&local_98,lVar4 + 0x80);
    } while (local_98 == 2);
    if (local_98 == 0) {
      local_90 = 0;
    }
  }
  return local_90;
}


