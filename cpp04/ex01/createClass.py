def create_canonical_class(class_name):
    # Header output (.hpp)
    header_output = f'#ifndef {class_name.upper()}_HPP\n'
    header_output += f'#define {class_name.upper()}_HPP\n\n'

	  # includes
    includes = input('Enter with includes: ')
    if includes:
        for attribute in includes.split(','):
            header_output += f'#include {attribute.strip()}\n\n'

    colors = input('Want colors to be defined: ')
    if colors == 'yes':
        header_output += '# define DEFAULT "\033[0m"\n'
        header_output += '# define RED "\033[31m"\n'
        header_output += '# define GREEN "\033[32m"\n'
        header_output += '# define YELLOW "\033[33m"\n'
        header_output += '# define BLUE "\033[34m"\n'
        header_output += '# define CYAN "\033[36m"\n\n'


    header_output += f'class {class_name} {{\n'
    
    
    # Private attributes
    private_attributes = input('Enter private attributes separated by commas: ')
    if private_attributes:
        header_output += 'private:\n'
        for attribute in private_attributes.split(','):
            header_output += f'\t{attribute.strip()};\n'

    # Protected attributes
    protected_attributes = input('Enter protected attributes separated by commas: ')
    if protected_attributes:
        header_output += 'protected:\n'
        for attribute in protected_attributes.split(','):
            header_output += f'\t{attribute.strip()};\n'
    
    # Public attributes
    header_output += 'public:\n'

    public_attributes = input('Enter public attributes separated by commas: ')
    if public_attributes:
        for attribute in public_attributes.split(','):
            header_output += f'\t{attribute.strip()};\n'
        header_output += '\n'
    
    

    # Default constructor
    header_output += f'\t{class_name}();\n'
    
    # Copy constructor
    header_output += f'\t{class_name}(const {class_name}& original);\n'
    
    # Assignment operator
    header_output += f'\t{class_name}& operator=(const {class_name}& other);\n'
    
    # Destructor
    header_output += f'\t~{class_name}();\n'
    
 
    

    header_output += '};\n\n'
    header_output += f'#endif'
    
    # Implementation output (.cpp)
    cpp_output = f'#include "{class_name}.hpp"\n\n'
    
    cpp_output += f'{class_name}::{class_name}() {{\n'
    cpp_output += f'\tstd::cout << CYAN << "{class_name}" << DEFAULT << GREEN << " default constructor called" << DEFAULT << std::endl;\n'
    cpp_output += '}\n\n'
    
    cpp_output += f'{class_name}::{class_name}(const {class_name}& original) {{\n'
    cpp_output += f'\tstd::cout << CYAN << "{class_name}" << DEFAULT << GREEN << " copy constructor called" << DEFAULT << std::endl;\n'
    cpp_output += '}\n\n'
    
    cpp_output += f'{class_name}& {class_name}::operator=(const {class_name}& other) {{\n'
    cpp_output += f'\tstd::cout << CYAN << "{class_name}" << DEFAULT << BLUE << " assingment operator called" << DEFAULT << std::endl;\n'
    cpp_output += '\treturn (*this);\n'
    cpp_output += '}\n\n'
    
    cpp_output += f'{class_name}::~{class_name}() {{\n'
    cpp_output += f'\tstd::cout << CYAN << "{class_name}" << DEFAULT << RED << " destructor called" << DEFAULT << std::endl;\n'
    cpp_output += '}\n\n'
    
    return header_output, cpp_output


# Example usage
class_name = input('Enter the class name: ')
header_code, cpp_code = create_canonical_class(class_name)

# Save code to .hpp file
with open(f'{class_name}.hpp', 'w') as header_file:
    header_file.write(header_code)

# Save code to .cpp file
with open(f'{class_name}.cpp', 'w') as cpp_file:
    cpp_file.write(cpp_code)

print('Class files created successfully!')

