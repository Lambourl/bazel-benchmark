#include "bench/fib.hpp"

// RE Benchmark TU 4187 of 20000 (depth=28, stamp="default")
namespace bench_tu_4187 {
constexpr unsigned long long result = ::bench::slow_fib<28, 4187>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_4187
