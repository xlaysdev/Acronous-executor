/* FUN_1800e6220 @ 1800e6220 */

undefined8 * FUN_1800e6220(undefined8 *param_1,undefined8 *param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  if (*(char *)(param_2 + 2) == '\0') {
    *param_1 = 3;
    uVar2 = param_2[1];
    param_1[1] = *param_2;
    param_1[2] = uVar2;
    *(undefined1 *)(param_2 + 2) = 1;
    return param_1;
  }
  if (*(char *)(param_2 + 2) == '\x01') {
                    /* WARNING: Subroutine does not return */
    FUN_180201c60();
  }
  FUN_180201c80(&PTR_s_C__Users_burne__cargo_registry_s_180215ee8);
  pcVar1 = (code *)swi(3);
  puVar3 = (undefined8 *)(*pcVar1)();
  return puVar3;
}


