#include "bench/fib.hpp"

// RE Benchmark TU 16278 of 20000 (depth=28, stamp="default")
namespace bench_tu_16278 {
constexpr unsigned long long result = ::bench::slow_fib<28, 16278>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_16278
