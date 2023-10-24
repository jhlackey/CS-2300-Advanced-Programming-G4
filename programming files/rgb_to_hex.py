#create function that est the color format 
def rgb to_hex(r, g, b): # Missing colon
    r = max(0, min(255, r))
    g = max(0, min(255, g))
    b = max(0, min(255, b)) # Added missing paren
    return '{:02X}{:02X}{:02X}'.format(r, g, b) # Removed semicolons


test with hex_color = rgb_to_hex(255, 127, 0) # returns "FF7F00"
# Fixed ==
