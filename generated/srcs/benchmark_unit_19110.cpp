#include "bench/fib.hpp"

// RE Benchmark TU 19110 of 20000 (depth=28, stamp="default")
namespace bench_tu_19110 {
constexpr unsigned long long result = ::bench::slow_fib<28, 19110>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_19110
