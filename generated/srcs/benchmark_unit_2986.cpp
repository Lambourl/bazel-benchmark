#include "bench/fib.hpp"

// RE Benchmark TU 2986 of 20000 (depth=28, stamp="default")
namespace bench_tu_2986 {
constexpr unsigned long long result = ::bench::slow_fib<28, 2986>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_2986
