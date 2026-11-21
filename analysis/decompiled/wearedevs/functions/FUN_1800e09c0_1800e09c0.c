/* FUN_1800e09c0 @ 1800e09c0 */

void FUN_1800e09c0(byte *param_1)

{
  longlong *plVar1;
  
  switch(param_1[800]) {
  case 0:
    if (1 < *param_1) {
      plVar1 = *(longlong **)(param_1 + 8);
      (**(code **)(*plVar1 + 0x20))(plVar1[3],plVar1[1],plVar1[2]);
      thunk_FUN_1801d3330(plVar1,0x20,8);
    }
                    /* WARNING: Could not recover jumptable at 0x0001800e0a4b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(longlong *)(param_1 + 0x10) + 0x20))
              (*(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x18),
               *(undefined8 *)(param_1 + 0x20));
    return;
  default:
    goto switchD_1800e09f8_caseD_1;
  case 3:
    FUN_1800dfe30(param_1 + 0x328);
    goto LAB_1800e0b04;
  case 4:
    if (*(int *)(param_1 + 0x368) != 9) {
      FUN_1800e1410(param_1 + 0x328);
      FUN_1800dfe30(param_1 + 0x368);
    }
    break;
  case 5:
    FUN_1800dfe30(param_1 + 0x330);
    param_1[0x322] = 0;
    if (*(int *)(param_1 + 0xe8) != 9) goto LAB_1800e0af0;
LAB_1800e0ab0:
    param_1[0x326] = 0;
    break;
  case 6:
    FUN_1800e1410(param_1 + 0x360);
    param_1[0x323] = 0;
    FUN_18009acf0(param_1 + 0x328);
    param_1[0x324] = 0;
    if (*(int *)(param_1 + 0xe8) == 9) goto LAB_1800e0ab0;
LAB_1800e0af0:
    param_1[0x325] = 0;
  }
  param_1[0x325] = 0;
  param_1[0x326] = 0;
LAB_1800e0b04:
  param_1[0x327] = 0;
switchD_1800e09f8_caseD_1:
  return;
}


