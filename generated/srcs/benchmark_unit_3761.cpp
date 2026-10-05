#include "bench/fib.hpp"

// RE Benchmark TU 3761 of 20000 (depth=28, stamp="default")
namespace bench_tu_3761 {
constexpr unsigned long long result = ::bench::slow_fib<28, 3761>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_3761
