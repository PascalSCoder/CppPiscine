#include <ShrubberyCreationForm.hpp>

#include <string>
#include <iostream>
#include <fstream>

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : Form("ShrubberyCreationForm", 145, 137)
{
	_target = target;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& ref)
{

}

ShrubberyCreationForm&	ShrubberyCreationForm::operator=(const ShrubberyCreationForm& ref)
{

}

ShrubberyCreationForm::~ShrubberyCreationForm()
{

}

void	ShrubberyCreationForm::Action(Bureaucrat const& executor) const
{
	std::ofstream outFile(_target + "_shrubbery");
	if (outFile.fail())
	{
		std::cout << "ShrubberyCreationForm failed to create new file." << std::endl;
		return;
	}

	outFile <<
		"                                                                                              ." << std::endl <<
		"                                                                                   .         ;  " << std::endl <<
		"                                                       .             .              ;%     ;;   " << std::endl <<
		"                                                        ,           ,                :;%  %;   " << std::endl <<
		"                                                         :         ;                   :;%;'     .,   " << std::endl <<
		"                                                ,.        %;     %;            ;        %;'    ,;" << std::endl <<
		"                                                  ;       ;%;  %%;        ,     %;    ;%;    ,%'" << std::endl <<
		"             ____________________________ " <<"         %;       %;%;      ,  ;       %;  ;%;   ,%;' " << std::endl <<
		"            /                            \\" <<"          ;%;      %;        ;%;        % ;%;  ,%;'" << std::endl <<
		"           |          ASCII trees        |" <<"           `%;.     ;%;     %;'         `;%%;.%;'" << std::endl <<
		"           |                             |" <<"            `:;%.    ;%%. %@;        %; ;@%;%'" << std::endl <<
		"            \\__________     ____________/ " <<"               `:%;.  :;bd%;          %;@%;'" << std::endl <<
		"                        \\   /            " <<"                 `@%:.  :;%.         ;@@%;'   " << std::endl <<
		"                         \\ /             " <<"                   `@%.  `;@%.      ;@@%;         " << std::endl <<
		"                        __             " << "                     `@%%. `@%%    ;@@%;        " << std::endl <<
		"                   .--.;_.'-.          " << "                       ;@%. :@%%  %@@%;       " << std::endl <<
		"              _.,  \\__.'  ;@ '.       " << "                         %@bd%%%bd%%:;     " << std::endl <<
		"            .';  `.  ;   __..-\"'o      " << "                           #@%%%%%:;;" << std::endl <<
		"           ;   ;' ;   ;_/   ._.-'      " << "                           %@@%%%::;" << std::endl <<
		"           '. }  :   /  `. _i/v\\.      " << "                           %@@@%(o);  . '         " << std::endl <<
		"           ;  i',;  (  \\_.' .(_)      " << "                           %@@@o%;:(.,'         " << std::endl <<
		"          ;  ' /{ \\/ '.   .r_.'       " << "                       `.. %@@@o%::;         " << std::endl <<
		"         .'\\  ;  .'  .''-';_           " << "                          `)@@@o%::;         " << std::endl <<
		"         ; ''-. ;   /     '.`.         " << "                           %@@(o)::;        " << std::endl <<
		"          \\    ;    '.     ; '.       " << "                          .%@@@@%::;         " << std::endl <<
		"           '._.;   _ ;     ;  ;        " << "                          ;%@@@@%::;.          " << std::endl <<
		"                \\.' '.__.-i   ;        " << "                         ;%@@@@%%:;;;. " << std::endl <<
		"                 'wWw'    \"wWw'        " << "                     ...;%@@@@@%%:;;;;,.." << std::endl;
		outFile.close();
}
