import math

def time_until_lost_connection(direction_A, direction_B):
    # Calculate angular separation in radians
    angular_separation = math.radians(abs(direction_A - direction_B) / 2)

    # Use haversine formula to calculate distance
    distance = (35 / 2) / math.sin(angular_separation)

    # Calculate time in hours
    time_hours = distance / 5

    # Convert time to minutes and round to 3 decimal places
    time_minutes = round(time_hours * 60, 3)

    return time_minutes
