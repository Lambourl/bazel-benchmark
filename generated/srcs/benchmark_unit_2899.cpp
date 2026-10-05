#include "bench/fib.hpp"

// RE Benchmark TU 2899 of 20000 (depth=28, stamp="default")
namespace bench_tu_2899 {
constexpr unsigned long long result = ::bench::slow_fib<28, 2899>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_2899
