(*Ex02 Sully*)
let index = 5
let name = ("Sully_" ^ string_of_int (index - 1))
let () = if (index > 0) then ( let out = open_out (name ^ ".ml") in (fun p i -> Printf.fprintf out p i (string_of_format p)) "(*Ex02 Sully*)let index = 5\nlet name = ("Sully_" ^ string_of_int (index - 1))\nlet () = if (index > 0) then ( let out = open_out (name ^ \".ml\") in (fun p i -> Printf.fprintf out p i (string_of_format p)) %S (index - 1);ignore((Sys.command (\"ocamlopt -o \" ^ name ^ \" \" ^ name ^ \".ml\")));ignore((Sys.command (\"./\" ^ name))));;" (index - 1);ignore((Sys.command ("ocamlopt -o " ^ name ^ " " ^ name ^ ".ml")));ignore((Sys.command ("./" ^ name))));;
